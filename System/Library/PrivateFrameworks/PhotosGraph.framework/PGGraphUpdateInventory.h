/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PGGraphUpdateInventory <NSObject>
@property (nonatomic,readonly) long long updateType; 
@property (assign,nonatomic) BOOL isResumingFullAnalysis; 
@property (nonatomic,readonly) BOOL hasMomentsToInsert; 
@property (nonatomic,readonly) BOOL hasMomentsToDelete; 
@property (nonatomic,readonly) BOOL hasMomentsToUpdate; 
@property (nonatomic,readonly) BOOL hasHighlightsToInsert; 
@property (nonatomic,readonly) BOOL hasHighlightsToDelete; 
@property (nonatomic,readonly) BOOL hasHighlightsToUpdate; 
@property (nonatomic,readonly) BOOL hasHighlightDayGroupsToInsert; 
@property (nonatomic,readonly) BOOL hasPersonsToInsert; 
@property (nonatomic,readonly) BOOL hasPersonsToDelete; 
@property (nonatomic,readonly) BOOL hasPersonsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToUpdate; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToDeletedPersons; 
@required
-(long long)updateType;
-(NSSet *)localIdentifiersOfPersonsToDelete;
-(NSSet *)localIdentifiersOfMomentsToDelete;
-(BOOL)hasPersonsToDelete;
-(void)setIsResumingFullAnalysis:(BOOL)arg1;
-(NSSet *)localIdentifiersOfPersonsToInsert;
-(BOOL)isResumingFullAnalysis;
-(NSSet *)localIdentifiersOfMomentsToUpdate;
-(BOOL)hasHighlightDayGroupsToInsert;
-(BOOL)hasPersonsToUpdate;
-(id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(BOOL)arg2;
-(BOOL)hasPersonsToInsert;
-(NSSet *)localIdentifiersOfPersonsToUpdate;
-(BOOL)hasMomentsToUpdate;
-(BOOL)hasHighlightsToDelete;
-(BOOL)hasMomentsToInsert;
-(NSSet *)localIdentifiersOfHighlightsToUpdate;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(BOOL)hasHighlightsToUpdate;
-(BOOL)hasMomentsToDelete;
-(NSSet *)localIdentifiersOfMomentsToInsert;
-(id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(BOOL)arg3;
-(BOOL)hasHighlightsToInsert;
-(NSSet *)localIdentifiersOfHighlightsToInsert;
-(NSSet *)localIdentifiersOfHighlightsToDelete;

@end

