/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPerformIntentCommand.h>
@class NSString, NSData;


@protocol _SFPBPerformIntentCommand <NSObject>
@property (nonatomic,copy) NSString * intentMessageName; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSData * intentMessageData; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSString *)applicationBundleIdentifier;
-(void)setIntentMessageData:(id)arg1;
-(void)setIntentMessageName:(id)arg1;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
-(id)initWithJSON:(id)arg1;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBPerformIntentCommand : PBCodable <_SFPBPerformIntentCommand, NSSecureCoding> {

	NSString* _intentMessageName;
	NSString* _applicationBundleIdentifier;
	NSData* _intentMessageData;

}

@property (nonatomic,copy) NSString * intentMessageName;                        //@synthesize intentMessageName=_intentMessageName - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSData * intentMessageData;                          //@synthesize intentMessageData=_intentMessageData - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(NSString *)applicationBundleIdentifier;
-(void)setIntentMessageData:(NSData *)arg1 ;
-(void)setIntentMessageName:(NSString *)arg1 ;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
@end
