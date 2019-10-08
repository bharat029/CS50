import cs50
import csv

from flask import Flask, jsonify, redirect, render_template, request

# Configure application
app = Flask(__name__)

# Reload templates when they are changed
app.config["TEMPLATES_AUTO_RELOAD"] = True


@app.after_request
def after_request(response):
    """Disable caching"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET"])
def get_index():
    return redirect("/form")


@app.route("/form", methods=["GET"])
def get_form():
    return render_template("form.html")


@app.route("/form", methods=["POST"])
def post_form():
    students = []
    with open('survey.csv', 'a') as file:
        cw = csv.writer(file)
        cw.writerow(request.form.values())

    students = []
    with open('survey.csv') as file:
        cr = csv.reader(file)
        students = list(cr)

    return render_template("sheet.html", students=students)


@app.route("/sheet", methods=["GET"])
def get_sheet():
    students = []
    with open('survey.csv') as file:
        cr = csv.reader(file)
        students = list(cr)

    return render_template("sheet.html", students=students)