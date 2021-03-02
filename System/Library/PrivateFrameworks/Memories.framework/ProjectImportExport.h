/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ProjectImportExport : NSObject {

	NSMutableArray* _exportedProjectList;

}

@property (retain) NSMutableArray * exportedProjectList;              //@synthesize exportedProjectList=_exportedProjectList - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setExportedProjectList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exportedProjectList;
-(void)refreshExportedProjectFileList;
-(BOOL)haveExportedProjectNamed:(id)arg1 ;
-(void)undeleteExportedProject:(id)arg1 ;
-(void)deleteExportedProject:(id)arg1 ;
-(void)deleteExportedProjectWithName:(id)arg1 ;
@end
