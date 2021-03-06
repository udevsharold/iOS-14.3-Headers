/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class QLThumbnailGenerationRequest, QLThumbnailGenerator;

@interface DOCIconThumbnailRequest : DOCThumbnailRequest {

	QLThumbnailGenerationRequest* _request;
	QLThumbnailGenerator* _thumbnailGenerator;

}
-(void)generateThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
-(id)initWithURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
@end

