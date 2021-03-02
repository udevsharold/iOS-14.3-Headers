/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAbstractItemList.h>

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList

@property (assign,nonatomic) int mediaType; 
@property (nonatomic,retain) SAMPCollection * parentCollection; 
+(id)mediaEntityList;
+(id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMediaType:(int)arg1 ;
-(int)mediaType;
-(SAMPCollection *)parentCollection;
-(void)setParentCollection:(SAMPCollection *)arg1 ;
-(id)encodedClassName;
@end
