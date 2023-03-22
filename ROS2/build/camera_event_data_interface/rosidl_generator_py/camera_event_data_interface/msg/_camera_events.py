# generated from rosidl_generator_py/resource/_idl.py.em
# with input from camera_event_data_interface:msg/CameraEvents.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x'
# Member 'y'
# Member 't'
# Member 'p'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraEvents(type):
    """Metaclass of message 'CameraEvents'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('camera_event_data_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'camera_event_data_interface.msg.CameraEvents')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera_events
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera_events
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera_events
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera_events
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera_events

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraEvents(metaclass=Metaclass_CameraEvents):
    """Message class 'CameraEvents'."""

    __slots__ = [
        '_x',
        '_y',
        '_t',
        '_p',
    ]

    _fields_and_field_types = {
        'x': 'sequence<uint16>',
        'y': 'sequence<uint16>',
        't': 'sequence<uint64>',
        'p': 'sequence<int8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = array.array('H', kwargs.get('x', []))
        self.y = array.array('H', kwargs.get('y', []))
        self.t = array.array('Q', kwargs.get('t', []))
        self.p = array.array('b', kwargs.get('p', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.t != other.t:
            return False
        if self.p != other.p:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'x' array.array() must have the type code of 'H'"
            self._x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'x' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._x = array.array('H', value)

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'y' array.array() must have the type code of 'H'"
            self._y = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'y' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._y = array.array('H', value)

    @property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 't' array.array() must have the type code of 'Q'"
            self._t = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 't' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._t = array.array('Q', value)

    @property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'p' array.array() must have the type code of 'b'"
            self._p = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'p' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._p = array.array('b', value)
