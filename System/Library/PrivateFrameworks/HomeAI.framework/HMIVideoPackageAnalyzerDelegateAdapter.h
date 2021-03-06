/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoPackageAnalyzerDelegate.h>

@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate> {

	/*^block*/id _packageAnalyzerDidDetectPackage;

}

@property (copy) id packageAnalyzerDidDetectPackage;              //@synthesize packageAnalyzerDidDetectPackage=_packageAnalyzerDidDetectPackage - In the implementation block
-(id)packageAnalyzerDidDetectPackage;
-(void)packageAnalyzer:(id)arg1 didDetectPackage:(id)arg2 error:(id)arg3 ;
-(void)setPackageAnalyzerDidDetectPackage:(id)arg1 ;
@end

