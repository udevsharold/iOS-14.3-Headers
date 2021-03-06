/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter {

	BOOL _hasLoadedProjects;
	NSArray* _possibleStates;
	WFAccountAccessResource* _accessResource;

}

@property (assign,nonatomic) BOOL hasLoadedProjects;                                       //@synthesize hasLoadedProjects=_hasLoadedProjects - In the implementation block
@property (assign,nonatomic,__weak) WFAccountAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
-(void)setProjects:(id)arg1 ;
-(void)dealloc;
-(id)projects;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(WFAccountAccessResource *)accessResource;
-(void)setAccessResource:(WFAccountAccessResource *)arg1 ;
-(void)fetchProjectsIfNeeded;
-(void)loadProjectsFromCache;
-(id)projectNamed:(id)arg1 ;
-(BOOL)hasLoadedProjects;
-(void)setHasLoadedProjects:(BOOL)arg1 ;
@end

