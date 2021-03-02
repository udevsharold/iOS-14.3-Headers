/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CVNLPCaptionPerformanceResult : NSObject {

	double maxpeak;
	double peakdelta;
	double recentpeak;
	double current;
	double cpuTime;
	double cpuInstructions;
	double timeInterval;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)dict;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end
