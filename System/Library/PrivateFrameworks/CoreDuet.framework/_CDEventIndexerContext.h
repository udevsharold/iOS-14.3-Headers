/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class _CDEventIndexerBookmark, NSDate, NSObject;

@interface _CDEventIndexerContext : NSObject {

	_CDEventIndexerBookmark* _bookmark;
	long long _currentVersion;
	unsigned long long _batchSize;
	/*^block*/id _completion;
	NSDate* _indexDate;
	NSObject*<OS_os_transaction> _transaction;

}
-(id)init;
-(id)description;
@end

