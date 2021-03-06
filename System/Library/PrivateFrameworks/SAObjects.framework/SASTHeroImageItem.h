/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SADecoratedString, NSString, SAUINanoImageResource;

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SADecoratedString * caption; 
@property (nonatomic,copy) NSString * position; 
@property (nonatomic,retain) SAUINanoImageResource * watchImageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)heroImageItem;
+(id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SADecoratedString *)caption;
-(void)setCaption:(SADecoratedString *)arg1 ;
-(NSString *)position;
-(void)setPosition:(NSString *)arg1 ;
-(SAUINanoImageResource *)watchImageResource;
-(void)setWatchImageResource:(SAUINanoImageResource *)arg1 ;
-(id)encodedClassName;
@end

