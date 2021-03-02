/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTVisit;

@interface RTVisitMonitorState : NSObject {

	RTVisit* _lastVisitIncident;
	RTVisit* _lastLowConfidenceVisitIncident;

}

@property (nonatomic,retain) RTVisit * lastVisitIncident;                           //@synthesize lastVisitIncident=_lastVisitIncident - In the implementation block
@property (nonatomic,retain) RTVisit * lastLowConfidenceVisitIncident;              //@synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident - In the implementation block
-(id)init;
-(void)dump;
-(id)initWithLastVisit:(id)arg1 lastLowConfidenceVisit:(id)arg2 ;
-(RTVisit *)lastVisitIncident;
-(RTVisit *)lastLowConfidenceVisitIncident;
-(void)setLastVisitIncident:(RTVisit *)arg1 ;
-(void)setLastLowConfidenceVisitIncident:(RTVisit *)arg1 ;
@end
