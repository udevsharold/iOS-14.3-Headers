/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/DOCThumbnail.h>

@class UIImage, DOCThumbnailRequest, NSString;

@interface DOCIconPromise : NSObject <DOCThumbnail> {

	UIImage* _icon;
	DOCThumbnailRequest* _request;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 ;
-(UIImage *)thumbnail;
-(void)removeListener:(id)arg1 ;
-(BOOL)isLoading;
-(void)addListener:(id)arg1 ;
-(BOOL)isRepresentativeIcon;
-(void)scheduleUpdateIfNeeded;
-(id)averageColorInRect:(CGRect)arg1 ;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;
@end

