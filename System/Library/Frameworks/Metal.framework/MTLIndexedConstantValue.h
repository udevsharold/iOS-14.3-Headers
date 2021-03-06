/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTLIndexedConstantValue : NSObject {

	unsigned long long _index;
	unsigned long long _dataType;
	char* _data;

}

@property (readonly) unsigned long long index;                 //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                               //@synthesize data=_data - In the implementation block
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void*)data;
-(unsigned long long)index;
-(void)dealloc;
-(id)description;
-(id)describe;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
@end

