/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString;

@interface SASTGridCell : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIDecoratedText * subTitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gridCellWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)gridCell;
-(id)groupIdentifier;
-(SAUIDecoratedText *)subTitle;
-(void)setSubTitle:(SAUIDecoratedText *)arg1 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(SAUIDecoratedText *)title;
@end

