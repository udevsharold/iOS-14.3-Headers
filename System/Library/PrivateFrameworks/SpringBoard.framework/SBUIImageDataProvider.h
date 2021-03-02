/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class UIImage, SBSnapshotDataProviderContext, XBSnapshotDataProviderContext, NSString;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {

	UIImage* _image;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;

}

@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchImageForFormat:(long long)arg1 ;
-(XBSnapshotDataProviderContext *)context;
-(id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 ;
@end
