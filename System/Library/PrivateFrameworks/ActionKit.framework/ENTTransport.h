/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENTTransport <NSObject>
@required
-(void)flush;
-(void)cancel;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3;

@end

