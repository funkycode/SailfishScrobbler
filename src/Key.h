#ifndef KEY_H
#define KEY_H

#include <QString>
#include <QStringBuilder>

#include "KeyValue.h"

namespace as
{
	class Key
	{
		public:
			Key(const char *name);

			KeyValue operator =(const QString &value) const;

		private:
			QString m_name;
	};

	const Key token = "token";
	const Key api_key = "api_key";
	const Key method = "method";
	const Key artist = "artist";
	const Key track = "track";
	const Key sk = "sk";
	const Key artist0 = "artist[0]";
	const Key track0 = "track[0]";
	const Key timestamp0 = "timestamp[0]";
}

#endif // KEY_H
