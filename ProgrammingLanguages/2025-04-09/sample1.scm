;;; typical eager evaluation
(define gen-list
  (lambda (start stop)
    (if (equal? start stop)
        (list start)
        (cons start (gen-list (+ start 1) stop)))))
