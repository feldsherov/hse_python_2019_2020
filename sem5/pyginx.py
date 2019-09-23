#!/bin/env python3
import argparse


def serve(port):
    pass

if __name__ == "__main__":
    parser = argparse.ArumentParser("my first simple http server")
    parser.add_argument("p", "port", help="port to serve")
    args = parser.parse_args()

    serve(args.port)
