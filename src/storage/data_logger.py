"""SQLite/data logging utilities.

This module can be expanded to handle sensor writes, thread safety,
and schema creation.
"""


class DataLogger:
    """Placeholder logger class."""

    def __init__(self, db_path: str = "src/data/sensor_data.db") -> None:
        self.db_path = db_path

    def connect(self) -> None:
        """Create/attach to the database."""
        pass

    def write_row(self, table_name: str, row: dict) -> None:
        """Write one row to the database."""
        pass
