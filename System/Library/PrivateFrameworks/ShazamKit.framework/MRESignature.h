/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MRESignature : NSObject {

	unsigned long long _trackID;
	NSData* _signatureData;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSData * signatureData;                  //@synthesize signatureData=_signatureData - In the implementation block
-(unsigned long long)trackID;
-(void)dealloc;
-(NSData *)signatureData;
-(id)initWithSignatureData:(id)arg1 trackID:(unsigned long long)arg2 ;
@end
