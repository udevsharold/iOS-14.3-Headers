/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface BLDAAPBuffer : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(long long)appendHeader:(unsigned)arg1 size:(unsigned)arg2 ;
-(long long)appendUInt8:(unsigned char)arg1 withCode:(unsigned)arg2 ;
-(long long)appendUInt32:(unsigned)arg1 withCode:(unsigned)arg2 ;
-(long long)appendUInt64:(unsigned long long)arg1 withCode:(unsigned)arg2 ;
-(id)init;
-(NSData *)data;
@end
