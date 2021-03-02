/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTBinaryFilterProtocol <NSObject>
@property (nonatomic,readonly) unsigned maxFrameSize; 
@optional
-(id)initWithInfo:(id)arg1;
-(id)initWithInfo:(id)arg1 getProperty:(/*^block*/id)arg2;

@required
-(void)reset;
-(unsigned)maxFrameSize;
-(void)filterFrame:(char**)arg1 size:(unsigned*)arg2 maxSize:(unsigned*)arg3 extraFrame:(/*^block*/id)arg4;

@end
