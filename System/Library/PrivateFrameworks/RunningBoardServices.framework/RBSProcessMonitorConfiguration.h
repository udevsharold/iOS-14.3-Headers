/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMonitorConfiguring.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSHashTable, NSString, NSArray, RBSProcessStateDescriptor;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding> {

	NSHashTable* _matchedHandles;
	NSString* _desc;
	int _clientPid;
	unsigned _serviceClass;
	unsigned long long _identifier;
	NSArray* _predicates;
	RBSProcessStateDescriptor* _stateDescriptor;
	unsigned long long _events;
	/*^block*/id _updateHandler;
	/*^block*/id _preventLaunchUpdateHandler;

}

@property (nonatomic,readonly) unsigned long long identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int clientPid;                                        //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,copy) NSArray * predicates;                                     //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,copy) RBSProcessStateDescriptor * stateDescriptor;              //@synthesize stateDescriptor=_stateDescriptor - In the implementation block
@property (assign,nonatomic) unsigned serviceClass;                                  //@synthesize serviceClass=_serviceClass - In the implementation block
@property (assign,nonatomic) unsigned long long events;                              //@synthesize events=_events - In the implementation block
@property (nonatomic,copy) id updateHandler;                                         //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id preventLaunchUpdateHandler;                            //@synthesize preventLaunchUpdateHandler=_preventLaunchUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(void)setPredicates:(NSArray *)arg1 ;
-(NSArray *)predicates;
-(unsigned long long)events;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)init;
-(id)preventLaunchUpdateHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreventLaunchUpdateHandle:(/*^block*/id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(void)setServiceClass:(unsigned)arg1 ;
-(id)matchedProcesses;
-(unsigned long long)hash;
-(unsigned long long)identifier;
-(id)updateHandler;
-(NSString *)description;
-(RBSProcessStateDescriptor *)stateDescriptor;
-(int)clientPid;
-(unsigned)serviceClass;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreventLaunchUpdateHandler:(id)arg1 ;
-(void)setStateDescriptor:(RBSProcessStateDescriptor *)arg1 ;
-(void)setEvents:(unsigned long long)arg1 ;
-(NSString *)debugDescription;
-(void)setUpdateHandler:(id)arg1 ;
@end

