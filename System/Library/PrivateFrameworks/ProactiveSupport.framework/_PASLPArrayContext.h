/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASLPArrayContext : NSObject {

	const unsigned* _storage;
	unsigned long long _count;

}

@property (readonly) const unsigned* storage;               //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)init;
-(const unsigned*)storage;
-(unsigned long long)count;
-(id)initWithStorage:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
@end
