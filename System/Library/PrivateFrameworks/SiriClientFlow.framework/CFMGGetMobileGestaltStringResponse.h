/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFMGGetMobileGestaltStringResponse : SABaseCommand <SAServerBoundCommand, CFLocalAceHandling>

@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getMobileGestaltStringResponse;
+(id)getMobileGestaltStringResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)encodedClassName;
@end
