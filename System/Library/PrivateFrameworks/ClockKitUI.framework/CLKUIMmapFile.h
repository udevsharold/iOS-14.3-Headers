/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLKUIMmapFile : NSObject {

	int _descriptor;
	NSString* _path;
	unsigned long long _length;
	const void* _bytes;

}

@property (nonatomic,readonly) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int descriptor;                         //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) const void* bytes;                      //@synthesize bytes=_bytes - In the implementation block
+(id)mmapFileWithPath:(id)arg1 ;
-(unsigned long long)length;
-(NSString *)path;
-(void)dealloc;
-(const void*)bytes;
-(int)descriptor;
-(id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void*)arg4 ;
@end
