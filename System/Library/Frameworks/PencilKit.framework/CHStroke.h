/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHStroke <NSObject>
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long strokeAttributes; 
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
@required
-(CGRect)bounds;
-(double)startTimestamp;
-(double)endTimestamp;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(id)encodedStrokeIdentifier;
-(unsigned long long)strokeAttributes;

@end
