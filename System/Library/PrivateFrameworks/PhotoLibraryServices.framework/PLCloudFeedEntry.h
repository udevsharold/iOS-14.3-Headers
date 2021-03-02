/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface PLCloudFeedEntry : PLManagedObject

@property (nonatomic,retain) NSDate * entryDate; 
@property (nonatomic,retain) NSNumber * entryTypeNumber; 
@property (nonatomic,retain) NSNumber * entryPriorityNumber; 
@property (nonatomic,retain) NSString * entryAlbumGUID; 
@property (nonatomic,retain) NSString * entryInvitationRecordGUID; 
@property (nonatomic,__weak,readonly) NSURL * URIRepresentation; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) long long entryPriority; 
+(id)entityName;
+(id)allEntriesInManagedObjectContext:(id)arg1 ;
+(id)entriesSortDescriptorsAscending:(BOOL)arg1 ;
+(id)allEntriesInLibrary:(id)arg1 ;
+(id)notificationPredicateForFilter:(long long)arg1 ;
+(id)filterPredicateForFilter:(long long)arg1 ;
+(id)additionalPrediateForFilter:(long long)arg1 ;
+(id)entityForFilter:(long long)arg1 inManagedObjectContext:(id)arg2 ;
+(id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(long long)arg4 filter:(long long)arg5 sortDescriptors:(id)arg6 ;
+(id)recentAssetsEntriesInLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)_recentEntriesInLibrary:(id)arg1 forEntity:(id)arg2 usingPredicate:(id)arg3 earliestDate:(id)arg4 latestDate:(id)arg5 limit:(long long)arg6 sortDescriptors:(id)arg7 ;
+(id)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3 ;
+(id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2 ;
-(NSURL *)URIRepresentation;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(long long)entryType;
-(long long)entryPriority;
@end
