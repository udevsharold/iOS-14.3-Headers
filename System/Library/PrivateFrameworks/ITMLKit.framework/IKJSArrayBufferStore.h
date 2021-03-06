/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IKAppContext;

@interface IKJSArrayBufferStore : NSObject {

	NSMutableDictionary* _bufferStorage;
	IKAppContext* _appContext;

}

@property (nonatomic,readonly) NSMutableDictionary * bufferStorage;              //@synthesize bufferStorage=_bufferStorage - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                 //@synthesize appContext=_appContext - In the implementation block
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 ;
-(NSMutableDictionary *)bufferStorage;
-(id)arrayBufferForData:(id)arg1 ;
@end

