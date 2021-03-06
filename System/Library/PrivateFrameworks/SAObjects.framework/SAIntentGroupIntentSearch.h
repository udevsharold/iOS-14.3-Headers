/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString, NSArray;

@interface SAIntentGroupIntentSearch : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentSearch;
+(id)intentSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)encodedClassName;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(BOOL)requiresResponse;
@end

