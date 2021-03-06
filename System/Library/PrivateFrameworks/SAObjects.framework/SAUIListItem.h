/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIListItem : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * imageType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelValue; 
@property (nonatomic,retain) id<SAAceSerializable> object; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * selectionText; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * title; 
+(id)listItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)listItem;
-(id)groupIdentifier;
-(id<SAAceSerializable>)object;
-(void)setImageType:(NSString *)arg1 ;
-(NSString *)labelValue;
-(void)setObject:(id<SAAceSerializable>)arg1 ;
-(NSString *)imageType;
-(void)setLabel:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setLabelValue:(NSString *)arg1 ;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)selectionText;
-(void)setSelectionText:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)title;
-(NSArray *)commands;
@end

