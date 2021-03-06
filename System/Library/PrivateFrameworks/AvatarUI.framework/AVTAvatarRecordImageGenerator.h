/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTUILogger;
@class AVTImageStore, AVTAvatarConfigurationImageRenderer, NSArray, AVTUIEnvironment, AVTCoreModel;

@interface AVTAvatarRecordImageGenerator : NSObject {

	AVTImageStore* _imageStore;
	AVTAvatarConfigurationImageRenderer* _renderer;
	NSArray* _scopes;
	id<AVTUILogger> _logger;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,readonly) AVTImageStore * imageStore;                                  //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfigurationImageRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * coreModel; 
@property (nonatomic,copy,readonly) NSArray * scopes;                                       //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                              //@synthesize environment=_environment - In the implementation block
+(id)supportedScopesForScale:(double)arg1 ;
-(NSArray *)scopes;
-(AVTAvatarConfigurationImageRenderer *)renderer;
-(AVTCoreModel *)coreModel;
-(BOOL)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id*)arg4 ;
-(AVTImageStore *)imageStore;
-(BOOL)generateThumbnailsForAvatarRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3 ;
-(id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2 ;
-(BOOL)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id*)arg3 ;
-(BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id*)arg3 ;
-(void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(/*^block*/id)arg2 ;
-(id<AVTUILogger>)logger;
-(AVTUIEnvironment *)environment;
@end

