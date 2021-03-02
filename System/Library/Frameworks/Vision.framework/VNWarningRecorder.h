/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNWarningRecorder.h>

@class NSMutableDictionary, NSString;

@interface VNWarningRecorder : NSObject <VNWarningRecorder> {

	NSMutableDictionary* _warnings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recordWarnings:(id)arg1 ;
-(id)init;
-(BOOL)hasWarnings;
-(id)warnings;
-(id)valueForWarning:(id)arg1 ;
-(void)setWarnings:(id)arg1 ;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
@end
