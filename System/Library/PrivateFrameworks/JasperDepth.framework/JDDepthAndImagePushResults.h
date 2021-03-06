/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class JDMatchedDepthAndImage, NSArray;

@interface JDDepthAndImagePushResults : NSObject {

	JDMatchedDepthAndImage* _match;
	NSArray* _droppedImages;

}

@property (nonatomic,retain) JDMatchedDepthAndImage * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSArray * droppedImages;                     //@synthesize droppedImages=_droppedImages - In the implementation block
-(JDMatchedDepthAndImage *)match;
-(void)setMatch:(JDMatchedDepthAndImage *)arg1 ;
-(NSArray *)droppedImages;
-(void)setDroppedImages:(NSArray *)arg1 ;
@end

