/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageBackgroundManagerDelegate, OS_dispatch_queue;
@class PDFRenderingProperties, NSMutableDictionary, NSObject;

@interface PDFPageBackgroundManagerPrivate : NSObject {

	id<PDFPageBackgroundManagerDelegate> documentDelegate;
	PDFRenderingProperties* renderingProperties;
	unsigned long long activePageIndex;
	NSMutableDictionary* backgroundImageCache[3];
	NSObject*<OS_dispatch_queue> workQueue;
	BOOL isCancled;
	BOOL isWorking;
	BOOL willForceUpdate;

}
@end

