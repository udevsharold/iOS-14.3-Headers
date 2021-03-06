/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSURL, NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSURL * audioMessageURL; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,retain) SAUIDecoratedText * content; 
@property (nonatomic,retain) SAUIDecoratedText * recipient; 
@property (nonatomic,copy) NSString * serviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)content;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)recipient;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
-(void)setAudioMessageURL:(NSURL *)arg1 ;
-(NSURL *)audioMessageURL;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)bundleId;
@end

