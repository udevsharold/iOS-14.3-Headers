/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface PCCKey : NSObject {

	pcc_invocation_key* _secret;

}

@property (assign) pcc_invocation_key* secret;              //@synthesize secret=_secret - In the implementation block
-(void)clear;
-(id)init;
-(void)dealloc;
-(pcc_invocation_key*)secret;
-(id)decrypt:(id)arg1 ;
-(void)setSecret:(pcc_invocation_key*)arg1 ;
-(id)encrypt:(id)arg1 ;
@end
