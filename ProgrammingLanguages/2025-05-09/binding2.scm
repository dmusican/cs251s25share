 (define C
  (lambda (p)
    (let ((x 4))
      (p 2))))

(define A
  (lambda ()
    (let ((x 3))
      (let ((B (lambda (y)
                (+ y x))))
        (C B)))))

(A)
