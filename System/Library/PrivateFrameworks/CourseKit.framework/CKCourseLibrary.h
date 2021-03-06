/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKSharedDatabase, NSManagedObjectContext;

@interface CKCourseLibrary : NSObject {

	CKSharedDatabase* _sharedDatabase;
	NSManagedObjectContext* _moc;

}

@property (nonatomic,retain) CKSharedDatabase * sharedDatabase;              //@synthesize sharedDatabase=_sharedDatabase - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;                   //@synthesize moc=_moc - In the implementation block
+(id)sharedDocumentsDirectory;
+(id)sharedCourseLibrary;
+(BOOL)isCourseLibraryAvailable;
+(BOOL)openCourse:(id)arg1 ;
-(NSManagedObjectContext *)moc;
-(CKSharedDatabase *)sharedDatabase;
-(id)init;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(id)allCourses;
-(id)courseWithCourseID:(id)arg1 ;
-(id)courseLibrayVersion;
-(void)setSharedDatabase:(CKSharedDatabase *)arg1 ;
@end

