% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/visualisation.r
\name{plotShuffles}
\alias{plotShuffles}
\title{Facetted bi-parameter scatter plots of the value of a parameter along the optimisation process}
\usage{
plotShuffles(logMh, x, y, objLims = NULL)
}
\arguments{
\item{logMh}{an mhData object}

\item{x}{the exact name of one of the model parameters}

\item{y}{the exact name of a second model parameter}
}
\value{
a ggplot object
}
\description{
Plot the value of a parameter along the optimisation process.
The color scale is the objective score. Useful to check the behavior of the optimisation process.
}

