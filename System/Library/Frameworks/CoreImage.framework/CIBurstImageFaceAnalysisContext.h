/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableDictionary, NSMutableArray, FCRFaceDetector;

@interface CIBurstImageFaceAnalysisContext : NSObject {

	NSMutableDictionary* curConfig;
	NSMutableDictionary* faceIdMapping;
	NSMutableDictionary* renameMapping;
	int faceIdCounter;
	NSMutableArray* faceInfoArray;
	int numFramesSinceFullFaceCore;
	int numFramesNoFaces;
	FCRFaceDetector* faceDetector;
	NSMutableArray* faceTimestampArray;
	double latestImageTimestamp;
	int lastFaceIndex;
	BOOL forceFaceDetectionEnable;
	int _version;
	double timeBlinkDetectionDone;
	double timeFaceDetectionDone;
	double latestFaceTimestamp;

}

@property (assign) double timeFaceDetectionDone; 
@property (assign) double timeBlinkDetectionDone; 
@property (assign) BOOL forceFaceDetectionEnable; 
@property (assign) double latestFaceTimestamp; 
@property (assign) int version;                                //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(id)initWithVersion:(id)arg1 ;
-(int)version;
-(CGRect)padRoiRect:(CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3 ;
-(void)setupFaceDetector;
-(CGRect)calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(BOOL*)arg3 ;
-(id)findOverlappingFaceStat:(CGRect)arg1 imageStat:(id)arg2 ;
-(void)addFaceToArray:(id)arg1 ;
-(int)findFacesInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)calcFaceScores:(id)arg1 ;
-(void)adjustFaceIdsForImageStat:(id)arg1 ;
-(void)dumpFaceInfoArray;
-(void)extractFacesFromMetadata:(id)arg1 ;
-(void)addFacesToImageStat:(id)arg1 imageSize:(CGSize)arg2 ;
-(double)timeBlinkDetectionDone;
-(double)timeFaceDetectionDone;
-(void)setTimeBlinkDetectionDone:(double)arg1 ;
-(void)setTimeFaceDetectionDone:(double)arg1 ;
-(BOOL)forceFaceDetectionEnable;
-(double)latestFaceTimestamp;
-(void)setForceFaceDetectionEnable:(BOOL)arg1 ;
-(void)setLatestFaceTimestamp:(double)arg1 ;
-(void)setVersion:(int)arg1 ;
@end
