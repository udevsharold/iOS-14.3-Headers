/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTFrameworkProtocol.h>

@class RTRoutineManager, NSString;

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {

	RTRoutineManager* _routineManager;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onScenarioTrigger:(id)arg1 withError:(id)arg2 ;
-(RTRoutineManager *)routineManager;
-(void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2 ;
-(void)onVehicleEvents:(id)arg1 error:(id)arg2 ;
-(void)onLeechedVisit:(id)arg1 withError:(id)arg2 ;
-(id)initWithRoutineManager:(id)arg1 ;
-(void)onVisit:(id)arg1 withError:(id)arg2 ;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

