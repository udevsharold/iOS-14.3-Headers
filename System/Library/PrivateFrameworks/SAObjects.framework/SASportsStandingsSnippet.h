/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSArray * selectedEntities; 
@property (assign,nonatomic) BOOL showCardinalPositions; 
+(id)standingsSnippet;
+(id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)columns;
-(NSArray *)selectedEntities;
-(void)setSelectedEntities:(NSArray *)arg1 ;
-(BOOL)showCardinalPositions;
-(void)setShowCardinalPositions:(BOOL)arg1 ;
-(NSArray *)entities;
-(void)setEntities:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setColumns:(NSArray *)arg1 ;
@end

