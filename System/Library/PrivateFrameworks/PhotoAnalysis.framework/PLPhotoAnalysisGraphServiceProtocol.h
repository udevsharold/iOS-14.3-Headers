/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoAnalysisGraphServiceProtocol
@optional
-(void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestGraphServiceStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 context:(id)arg3 resultBlock:(/*^block*/id)arg4;
-(void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)loadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestLastQuestionGenerationJobDateWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)requestSignalModelInfosWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)unloadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestHighlightEstimatesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)invalidateGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;

@end

