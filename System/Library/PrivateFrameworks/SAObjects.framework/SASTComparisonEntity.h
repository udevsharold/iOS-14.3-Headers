/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, SAUINanoImageResource, NSString;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIDecoratedText * decoratedTitle; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)comparisonEntity;
+(id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(SAUIDecoratedText *)decoratedTitle;
-(void)setDecoratedTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
@end

