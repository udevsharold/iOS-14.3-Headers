/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SANoteObject : SADomainObject

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,copy) NSDate * createdDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (assign,nonatomic) BOOL restricted; 
@property (nonatomic,copy) NSString * title; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setContents:(NSString *)arg1 ;
-(NSString *)contents;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(BOOL)restricted;
-(void)setTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSDate *)lastModifiedDate;
-(NSString *)title;
-(NSDate *)createdDate;
@end

