/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2EncodedResponseThread.h>
#import <libobjc.A.dylib/HAP2EncodedListPairingsResponse.h>

@class NSArray, NSString;

@interface HAP2EncodedListPairingsResponseThread : HAP2EncodedResponseThread <HAP2EncodedListPairingsResponse> {

	NSArray* _pairings;

}

@property (nonatomic,readonly) NSArray * pairings;                             //@synthesize pairings=_pairings - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBTLEResponse:(id)arg1 pairings:(id)arg2 ;
-(NSArray *)pairings;
@end
