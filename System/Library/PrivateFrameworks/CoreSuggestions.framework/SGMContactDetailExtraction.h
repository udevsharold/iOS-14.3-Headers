/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(void)trackEventWithScalar:(unsigned long long)arg1 source:(SGMDocumentType_)arg2 signature:(SGMTypeSafeBool_)arg3 detail:(SGMContactDetailType_)arg4 outcome:(SGMContactDetailExtractionOutcome_)arg5 foundInSenderCNContact:(SGMContactDetailOwner_)arg6 extractionModelVersion:(unsigned long long)arg7 isUnlikelyPhone:(SGMTypeSafeBool_)arg8 signatureExtractionSource:(SGMContactDetailExtractionSignatureSource_)arg9 ;
-(id)init;
-(PETScalarEventTracker *)tracker;
@end
