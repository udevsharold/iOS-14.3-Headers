/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUICFauxFlamesImageDataContainer : NSObject {

	void* _bytes;
	unsigned long long _length;

}

@property (nonatomic,readonly) void* bytes;                            //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
-(unsigned long long)length;
-(void)dealloc;
-(void*)bytes;
-(id)initWithPath:(id)arg1 length:(unsigned long long)arg2 ;
@end
