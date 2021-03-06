/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)entityName;
+(id)keyPathsForValuesAffectingPersonID;
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(NSString *)personID;
-(void)awakeFromInsert;
-(BOOL)shouldDeleteWhenEmpty;
-(void)setPersonID:(NSString *)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
@end

